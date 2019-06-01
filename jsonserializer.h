#ifndef JSONSERIALIZER_H
#define JSONSERIALIZER_H

#include <QJsonObject>
#include <QByteArray>
#include "strategy.h"

class JSONSerializer
{
public:
    JSONSerializer(const Strategy &strategy);

    QByteArray write() const;
    static std::optional<Strategy> read(const QString &json);
private:
    const Strategy &strategy;
    static QJsonObject activityToJson(const Activity &activity);
};

namespace Keys {
    const QString slotDuration = "slotDuration";
    const QString startTime = "startTime";
    const QString activities = "activities";
    const QString name = "name";
    const QString slotsKey = "slots";
};

#endif // JSONSERIALIZER_H
