#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    void InitPushBtn();
    void InitTreeWidget();

private slots:
    void onClickOpen();
    void onClickSave();

private:
    QGridLayout* m_pLayout;
    QTreeWidget* m_pTreeWidget;
};

#endif // WIDGET_H