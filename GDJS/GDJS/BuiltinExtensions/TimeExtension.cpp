/*
 * GDevelop JS Platform
 * Copyright 2008-2015 Florian Rival (Florian.Rival@gmail.com). All rights reserved.
 * This project is released under the MIT License.
 */
#include "TimeExtension.h"
#include "GDCore/BuiltinExtensions/AllBuiltinExtensions.h"
#include "GDCore/Events/EventsCodeGenerator.h"
#include "GDCore/Events/EventsCodeGenerationContext.h"
#include "GDCore/Events/ExpressionsCodeGeneration.h"
#include "GDCore/Events/EventsCodeNameMangler.h"
#include "GDCore/Events/InstructionMetadata.h"
#include "GDCore/Tools/Localization.h"

namespace gdjs
{

TimeExtension::TimeExtension()
{
    gd::BuiltinExtensionsImplementer::ImplementsTimeExtension(*this);

    SetExtensionInformation("BuiltinTime",
                          _("Time"),
                          _("Built-in extension providing actions and conditions about the time."),
                          "Florian Rival",
                          "Open source (MIT License)");

    GetAllConditions()["Timer"].SetFunctionName("gdjs.evtTools.runtimeScene.timerElapsedTime");
    GetAllConditions()["TimerPaused"].SetFunctionName("gdjs.evtTools.runtimeScene.timerPaused");
    GetAllActions()["ResetTimer"].SetFunctionName("gdjs.evtTools.runtimeScene.resetTimer");
    GetAllActions()["PauseTimer"].SetFunctionName("gdjs.evtTools.runtimeScene.pauseTimer");
    GetAllActions()["UnPauseTimer"].SetFunctionName("gdjs.evtTools.runtimeScene.unpauseTimer");
    GetAllActions()["RemoveTimer"].SetFunctionName("gdjs.evtTools.runtimeScene.removeTimer");
    GetAllConditions()["TimeScale"].SetFunctionName("gdjs.evtTools.runtimeScene.getTimeScale");
    GetAllActions()["ChangeTimeScale"].SetFunctionName("gdjs.evtTools.runtimeScene.setTimeScale");

    GetAllExpressions()["TimeDelta"].SetFunctionName("gdjs.evtTools.runtimeScene.getElapsedTimeInSeconds");
    GetAllExpressions()["TempsFrame"].SetFunctionName("gdjs.evtTools.runtimeScene.getElapsedTimeInSeconds"); //Deprecated
    GetAllExpressions()["ElapsedTime"].SetFunctionName("gdjs.evtTools.runtimeScene.getElapsedTimeInSeconds");
    GetAllExpressions()["TimerElapsedTime"].SetFunctionName("gdjs.evtTools.runtimeScene.getTimerElapsedTimeInSeconds");
    GetAllExpressions()["TimeFromStart"].SetFunctionName("gdjs.evtTools.runtimeScene.getTimeFromStartInSeconds");
    GetAllExpressions()["TempsDebut"].SetFunctionName("gdjs.evtTools.runtimeScene.getTimeFromStartInSeconds");
    GetAllExpressions()["TimeScale"].SetFunctionName("gdjs.evtTools.runtimeScene.getTimeScale");
    GetAllExpressions()["Time"].SetFunctionName("gdjs.evtTools.runtimeScene.getTime");
}

}
