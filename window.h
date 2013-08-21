#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>
#include "textarea.h"

class Window : public QWidget
{
		Q_OBJECT
	public:
		explicit Window(QWidget *parent = 0);
		void    initialize(void);

	private:
		QGridLayout *layout;
		TextArea *textArea;

	signals:

	public slots:

};

#endif // WINDOW_H
