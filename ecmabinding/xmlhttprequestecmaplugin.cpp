#include "xmlhttprequestecmaplugin.h"
#include "xmlhttprequest_ecmabing.h"

QStringList XmlHttpRequestEcmaPlugin::keys() const
{
    return QStringList() << "xmlhttprequest";
}

void XmlHttpRequestEcmaPlugin::initialize(const QString &key, QScriptEngine *engine)
{
    if (key == "xmlhttprequest") {
        XmlHttpRequest_EcmaBing::initBinding(engine);
    }
}
