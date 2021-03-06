#ifndef DISPLAY_H
#define DISPLAY_H

#ifndef QT_H
#include <qwidget.h>
#endif // QT_H
#include <qstringlist.h> //peter adds
class QTimer;
class Screen;
class QStringList;
class QString;
class QLineEdit;
class QPushButton;

class DisplayWidget : public QWidget {
    Q_OBJECT
public:
        DisplayWidget( QWidget *parent=0, const char *name=0 );
        QSize sizeHint() const;
        double readCurveDate();
        void readFile();
        void run();

protected:
       

private slots:
        void tick();
        void start();
        void stop();

private:
        Screen *screen1;
        Screen *screen2;
        Screen *screen3;
   
        QLineEdit *lineEdit;
        QPushButton *startButton, *stopButton;
                QTimer *timer;
                enum { Margin = 40};        
        QString str;
        QStringList strlist;
        QStringList ::Iterator it;
        int time;
        double yval;
};

#endif // PLOT_H
