//
// Created by JavaMan on 2021/10/20.
//

#ifndef SWUFEAUTOREPORTSYSTEMOC_MISEXCEPTIONLOGGER_H
#define SWUFEAUTOREPORTSYSTEMOC_MISEXCEPTIONLOGGER_H


#define NPE @"NullPointerException"

#define NPEF @"NullPointerException happen with %@"

#define LOG_NPE NSLog(NPE)

#define LOGF_NPE(format) NSLog(NPEF, format)


#endif //SWUFEAUTOREPORTSYSTEMOC_MISEXCEPTIONLOGGER_H
