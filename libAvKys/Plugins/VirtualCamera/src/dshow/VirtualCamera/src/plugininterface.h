/* Webcamoid, webcam capture application.
 * Copyright (C) 2011-2017  Gonzalo Exequiel Pedone
 *
 * Webcamoid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Webcamoid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Webcamoid. If not, see <http://www.gnu.org/licenses/>.
 *
 * Web-Site: http://webcamoid.github.io/
 */

#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <string>
#include <combaseapi.h>

namespace AkVCam
{
    class PluginInterfacePrivate;

    class PluginInterface
    {
        public:
            PluginInterface();
            ~PluginInterface();

            HINSTANCE pluginHinstance() const;
            HINSTANCE &pluginHinstance();
            bool registerServer(const std::string &deviceId,
                                const std::wstring &description) const;
            void unregisterServer(const std::string &deviceId) const;
            bool registerFilter(const std::string &deviceId,
                                const std::wstring &description) const;
            void unregisterFilter(const std::string &deviceId) const;
            bool setDevicePath(const std::string &deviceId) const;
            bool createDevice(const std::string &deviceId,
                              const std::wstring &description);
            void destroyDevice(const std::string &deviceId);

        private:
            PluginInterfacePrivate *d;
    };
}

#endif // PLUGININTERFACE_H
