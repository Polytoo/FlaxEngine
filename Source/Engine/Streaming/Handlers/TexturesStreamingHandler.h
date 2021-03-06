// Copyright (c) 2012-2020 Wojciech Figat. All rights reserved.

#pragma once

#include "Engine/Streaming/IStreamingHandler.h"

/// <summary>
/// Implementation of IStreamingHandler for streamable textures.
/// </summary>
/// <seealso cref="IStreamingHandler" />
class FLAXENGINE_API TexturesStreamingHandler : public IStreamingHandler
{
public:

    // [IStreamingHandler]
    StreamingQuality CalculateTargetQuality(StreamableResource* resource, DateTime now) override;
    int32 CalculateResidency(StreamableResource* resource, StreamingQuality quality) override;
    int32 CalculateRequestedResidency(StreamableResource* resource, int32 targetResidency) override;
};
