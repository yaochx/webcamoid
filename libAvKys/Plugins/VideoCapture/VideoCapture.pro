# Webcamoid, webcam capture application.
# Copyright (C) 2016  Gonzalo Exequiel Pedone
#
# Webcamoid is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Webcamoid is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Webcamoid. If not, see <http://www.gnu.org/licenses/>.
#
# Web-Site: http://webcamoid.github.io/

TEMPLATE = subdirs

CONFIG(debug, debug|release): CONFIG += ordered

SUBDIRS = src src/generic
android: SUBDIRS += src/androidcamera
CONFIG(config_avfoundation): SUBDIRS += src/avfoundation
CONFIG(config_cmio): SUBDIRS += src/cmio
CONFIG(config_dshow): SUBDIRS += src/dshow
CONFIG(config_ffmpeg): SUBDIRS += src/ffmpeg
CONFIG(config_gstreamer): SUBDIRS += src/gstreamer
CONFIG(config_libuvc): SUBDIRS += src/libuvc
CONFIG(config_mediafoundation): SUBDIRS += src/mediafoundation
CONFIG(config_ndk_camera): SUBDIRS += src/ndkcamera
CONFIG(config_v4l2): SUBDIRS += src/v4l2sys
CONFIG(config_v4lutils): SUBDIRS += src/v4lutils
