/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp /usr/share/./dbus-1/interfaces/org.freedesktop.PowerManagement.xml -c PowerManagement -p powermanagement
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef POWERMANAGEMENT_H_1289511259
#define POWERMANAGEMENT_H_1289511259

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.PowerManagement
 */
class PowerManagementInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.PowerManagement"; }

public:
    PowerManagementInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~PowerManagementInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> canHibernate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CanHibernate"), argumentList);
    }

    inline QDBusPendingReply<bool> canSuspend()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CanSuspend"), argumentList);
    }

    inline QDBusPendingReply<> hibernate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Hibernate"), argumentList);
    }

    inline QDBusPendingReply<> suspend()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Suspend"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void canHibernateChanged(bool can_hibernate);
    void canSuspendChanged(bool can_suspend);
};

namespace org {
  namespace freedesktop {
    typedef ::PowerManagementInterface PowerManagement;
  }
}
#endif