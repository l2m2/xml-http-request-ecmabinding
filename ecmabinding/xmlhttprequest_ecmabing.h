#ifndef XMLHTTPREQUEST_ECMABING_H
#define XMLHTTPREQUEST_ECMABING_H

#include <QScriptValue>

class QScriptEngine;
class QScriptContext;

class XmlHttpRequest_EcmaBing
{
public:
    static void initBinding(QScriptEngine *engine);
    static QScriptValue create(QScriptContext *context, QScriptEngine *engine);
};

#endif // XMLHTTPREQUEST_ECMABING_H
