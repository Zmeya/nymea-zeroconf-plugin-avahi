/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*
* Copyright 2013 - 2020, nymea GmbH
* Contact: contact@nymea.io
*
* This file is part of nymea.
* This project including source code and documentation is protected by
* copyright law, and remains the property of nymea GmbH. All rights, including
* reproduction, publication, editing and translation, are reserved. The use of
* this project is subject to the terms of a license agreement to be concluded
* with nymea GmbH in accordance with the terms of use of nymea GmbH, available
* under https://nymea.io/license
*
* GNU Lesser General Public License Usage
* Alternatively, this project may be redistributed and/or modified under the
* terms of the GNU Lesser General Public License as published by the Free
* Software Foundation; version 3. This project is distributed in the hope that
* it will be useful, but WITHOUT ANY WARRANTY; without even the implied
* warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this project. If not, see <https://www.gnu.org/licenses/>.
*
* For any further details and any questions please contact us under
* contact@nymea.io or see our FAQ/Licensing Information on
* https://nymea.io/license/faq
*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef ZEROCONFSERVICEPUBLISHERAVAHI_H
#define ZEROCONFSERVICEPUBLISHERAVAHI_H

#include <QObject>

#include <network/zeroconf/zeroconfservicepublisher.h>

#include "qtavahiservicepublisher.h"

class ZeroConfServicePublisherAvahi : public ZeroConfServicePublisher
{
    Q_OBJECT
public:
    explicit ZeroConfServicePublisherAvahi(QtAvahiServicePublisher *publisher, QObject *parent = nullptr);

    bool registerService(const QString &name, const QHostAddress &hostAddress, const quint16 &port, const QString &serviceType, const QHash<QString, QString> &txtRecords) override;
    void unregisterService(const QString &name) override;

private:
    QtAvahiServicePublisher *m_publisher = nullptr;
};

#endif // ZEROCONFSERVICEPUBLISHERAVAHI_H
