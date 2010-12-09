/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp /usr/share/./dbus-1/interfaces/org.freedesktop.PowerManagement.xml -c PowerManagement -p powermanagement
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CONSOLEKIT_H_1289511259
#define CONSOLEKIT_H_1289511259

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.ConsoleKit
 */
class ConsoleKitInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ConsoleKit"; }

public:
    ConsoleKitInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ConsoleKitInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> canStop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CanStop"), argumentList);
    }

    inline QDBusPendingReply<bool> canRestart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CanRestart"), argumentList);
    }

    inline QDBusPendingReply<> stop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Stop"), argumentList);
    }

    inline QDBusPendingReply<> restart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Restart"), argumentList);
    }

};
#endif