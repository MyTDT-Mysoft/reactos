/*
 * PROJECT:         ReactOS DiskPart
 * LICENSE:         GPL - See COPYING in the top level directory
 * FILE:            base/system/diskpart/inactive.c
 * PURPOSE:         Manages all the partitions of the OS in
 *					an interactive way
 * PROGRAMMERS:     Lee Schroeder
 */
#include "diskpart.h"

BOOL inactive_main(INT argc, WCHAR **argv)
{
    return TRUE;
}


VOID help_inactive(INT argc, WCHAR **argv)
{
    PrintResourceString(IDS_HELP_CMD_INACTIVE);
}
