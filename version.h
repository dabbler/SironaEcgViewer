/*
 *
 *
 * Copyright (C) 2018 Datrix
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see https://www.gnu.org/licenses/.
 *
 */
#ifndef __VERSION_H
#define __VERSION_H

#include <QtGui>

#define VERSION_MAJOR	2
#define VERSION_MINOR	1
#define SVN_REVISION	131

QString glb_version = QString("$Rev:  %1.%2.%3").arg(VERSION_MAJOR).arg(VERSION_MINOR).arg( QString::number(SVN_REVISION) );

#endif // __VERSION_H
