#ifndef PROJECT2_H
#define PROJECT2_H

#include <interfaces/iplugin.h>

class Project2 : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    Project2(QObject* parent, const QVariantList& args);
};

#endif // PROJECT2_H
