/******************************************************************************
	Name: description
	Copyright (C) 2011 Wang Bin <wbsecg1@gmail.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along
	with this program; if not, write to the Free Software Foundation, Inc.,
	51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
******************************************************************************/


#include "qaerowindow.h"
#include <QtGui/QBitmap>
#include <QtGui/QPainter>
#include <QtGui/QResizeEvent>

void QAeroWidget::init()
{
	setAttribute(Qt::WA_TranslucentBackground);
}

void QAeroWidget::resizeEvent(QResizeEvent *event)
{
	QWidget::resizeEvent(event);
}

void QAeroWidget::paintEvent(QPaintEvent* event)
{
	//QWidget::paintEvent(event);
	QPainter p(this);
	QColor backgroundColor = palette().light().color();
	backgroundColor.setAlpha(effect_alpha);
	p.fillRect(event->rect(), backgroundColor);

}
