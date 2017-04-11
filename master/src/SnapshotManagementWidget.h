/*
 * SnapshotManagementWidget.h - declaration of snapshot management view
 *
 * Copyright (c) 2004-2017 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of Veyon - http://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef SNAPSHOT_MANAGEMENT_WIDGET_H
#define SNAPSHOT_MANAGEMENT_WIDGET_H

#include <QFileSystemModel>
#include <QWidget>

class QModelIndex;

namespace Ui {
class SnapshotManagementWidget;
}

class SnapshotManagementWidget : public QWidget
{
	Q_OBJECT
public:
	SnapshotManagementWidget( QWidget *parent );
	~SnapshotManagementWidget() override;


protected:
	void resizeEvent( QResizeEvent* event ) override;

private slots:
	void snapshotSelected( const QModelIndex &idx );
	void snapshotDoubleClicked( const QModelIndex &idx );

	void showSnapshot();
	void deleteSnapshot();


private:
	Ui::SnapshotManagementWidget* ui;
	QFileSystemModel m_fsModel;

} ;

#endif
