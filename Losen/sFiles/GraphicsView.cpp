#include "GraphicsView.h"
#include "Losen.h"

GraphicsView::GraphicsView(QWidget *parent) : QGraphicsView(parent) 
{}
GraphicsView::~GraphicsView() {}
//Zoom in/out
void GraphicsView::wheelEvent(QWheelEvent* event) 
{
  setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
  if (event->delta() > 0) {
    // Zoom in
    scale(scaleFactor, scaleFactor);
  }
  else {
    // Zooming out
    scale(1.0 / scaleFactor, 1.0 / scaleFactor);
  }
}

void GraphicsView::mousePressEvent(QMouseEvent* event)
{
  if (event->button() == Qt::LeftButton)
  {
    setDragMode(QGraphicsView::ScrollHandDrag);
    
    // Store original position.
    m_originX = event->x();
    m_originY = event->y();
  }
  else
  {
    QGraphicsView::mousePressEvent(event);
  }
}

void GraphicsView::mouseMoveEvent(QMouseEvent* event)
{
  if (event->buttons() == Qt::LeftButton)
  {
    QPointF oldp = mapToScene(m_originX/10, m_originY/10);
    QPointF newP = mapToScene(event->pos());
    QPointF translation = newP - oldp;
    
    translate(translation.x(), translation.y());

    m_originX = event->x();
    m_originY = event->y();
    return;
  } QGraphicsView::mouseMoveEvent(event);
}

void GraphicsView::mouseReleaseEvent(QMouseEvent* event)
{
  if (event->button() == Qt::LeftButton)
  {
    setDragMode(QGraphicsView::NoDrag);
    setInteractive(true);
  }
  else
  {
    QGraphicsView::mouseReleaseEvent(event);
  }
}
