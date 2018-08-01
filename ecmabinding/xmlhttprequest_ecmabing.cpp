#include "xmlhttprequest_ecmabing.h"
#include <QScriptEngine>
#include <QScriptContext>
#include "../xmlhttprequest/xmlhttprequestclass.h"

void XmlHttpRequest_EcmaBing::initBinding(QScriptEngine *engine)
{
    QScriptValue xmlHttpRequestConstructorValue = engine->newFunction(XMLHttpRequestClass::constructor);
    engine->globalObject().setProperty("XMLHttpRequest", xmlHttpRequestConstructorValue);
}

QScriptValue XmlHttpRequest_EcmaBing::create(QScriptContext *context, QScriptEngine *engine)
{
    Q_UNUSED(context)
    return engine->undefinedValue();
}
