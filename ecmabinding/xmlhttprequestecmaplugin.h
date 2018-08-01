#ifndef XMLHTTPREQUESTECMAPLUGIN_H
#define XMLHTTPREQUESTECMAPLUGIN_H

#include <QScriptExtensionPlugin>

class XmlHttpRequestEcmaPlugin : public QScriptExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.4d4a")
public:
    QStringList keys() const override;
    void initialize(const QString &key, QScriptEngine *engine) override;
};

#endif // XMLHTTPREQUESTECMAPLUGIN_H
