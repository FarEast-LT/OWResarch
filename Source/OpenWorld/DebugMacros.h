#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE_DEBUG(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Cyan, true, -1.f);
#define DRAW_SPHERE_DEBUG_SingleFrame(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Cyan, false, -1.f);

#define DRAW_LINE_DEBUG(LocationStart, LocationEnd) if(GetWorld()) DrawDebugLine(GetWorld(), LocationStart, LocationEnd, FColor::Cyan, true, -1.f, 0, 1.f);
#define DRAW_LINE_DEBUG_SingleFrame(LocationStart, LocationEnd) if(GetWorld()) DrawDebugLine(GetWorld(), LocationStart, LocationEnd, FColor::Cyan, false, -1.f, 0, 1.f);

#define DRAW_POINT_DEBUG(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15, FColor::Cyan, true, -1.f);
#define DRAW_POINT_DEBUG_SingleFrame(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15, FColor::Cyan, false, -1.f);

#define DRAW_LINEANDPOINT_DEBUG(LocationStart, LocationEnd) if (GetWorld())\
{\
	DrawDebugLine(GetWorld(), LocationStart, LocationEnd, FColor::Cyan, true, -1.f);\
	DrawDebugPoint(GetWorld(), LocationEnd, 15, FColor::Cyan, true, -1.f);\
};

#define DRAW_LINEANDPOINT_DEBUG_SingleFrame(LocationStart, LocationEnd) if (GetWorld())\
{\
	DrawDebugLine(GetWorld(), LocationStart, LocationEnd, FColor::Cyan, false, -1.f, 0, 1.f);\
	DrawDebugPoint(GetWorld(), LocationEnd, 15, FColor::Cyan, false, -1.f);\
};