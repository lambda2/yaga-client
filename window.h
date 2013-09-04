#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>
#include "textarea.h"
#include "yagacore.h"

class Window : public QWidget
{
		Q_OBJECT
	public:
		explicit		Window(QWidget *parent = 0);
		void			initialize(void);

	private:
		QGridLayout		*layout;
		TextArea		*textArea;
		QLabel			*response;
		QPushButton		*submitButton;
		YagaCore		*core;

	signals:

	public slots:
		void	submitAction();

};

#endif // WINDOW_H
