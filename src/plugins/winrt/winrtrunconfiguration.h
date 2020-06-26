/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#pragma once

#include <projectexplorer/runconfigurationaspects.h>

namespace WinRt {
namespace Internal {

class UninstallAfterStopAspect : public ProjectExplorer::BaseBoolAspect
{
    Q_OBJECT

public:
    UninstallAfterStopAspect();
};

class LoopbackExemptClientAspect : public ProjectExplorer::BaseBoolAspect
{
    Q_OBJECT

public:
    LoopbackExemptClientAspect();
};

class LoopbackExemptServerAspect : public ProjectExplorer::BaseBoolAspect
{
    Q_OBJECT

public:
    LoopbackExemptServerAspect();
};

class WinRtRunConfiguration : public ProjectExplorer::RunConfiguration
{
    Q_OBJECT

public:
    WinRtRunConfiguration(ProjectExplorer::Target *target, Utils::Id id);
};

class WinRtRunConfigurationFactory  : public ProjectExplorer::RunConfigurationFactory
{
public:
    WinRtRunConfigurationFactory();
};

} // namespace Internal
} // namespace WinRt
