#pragma once
#include <QWheelEvent>
#include <QGraphicsView>
class GraphicsView : public QGraphicsView {
  Q_OBJECT
public:
  GraphicsView(QWidget* parent = nullptr);
  ~GraphicsView();
  void wheelEvent(QWheelEvent* event) override;
  void mousePressEvent(QMouseEvent* event) override;
  void mouseMoveEvent(QMouseEvent* event) override;
  void mouseReleaseEvent(QMouseEvent* event) override;
private:
  double scaleFactor = 1.15;
  int m_originX = 0;
  int m_originY = 0;
};
