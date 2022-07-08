#pragma once

#include <userver/clients/http/destination_statistics.hpp>
#include <userver/formats/json/value.hpp>

USERVER_NAMESPACE_BEGIN

namespace clients::http {

class DestinationStatistics;

formats::json::Value DestinationStatisticsToJson(
    const DestinationStatistics& stats);

}  // namespace clients::http

USERVER_NAMESPACE_END
