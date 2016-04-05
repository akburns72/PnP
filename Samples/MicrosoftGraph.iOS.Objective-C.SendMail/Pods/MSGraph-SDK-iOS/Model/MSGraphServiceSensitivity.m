/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#import "MSGraphServiceSensitivity.h"

@implementation MSGraphServiceSensitivitySerializer

+(MSGraphServiceSensitivity) fromString:(NSString *) string {

    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         [NSNumber numberWithInt:MSGraphServiceSensitivityNormal], @"normal", [NSNumber numberWithInt:MSGraphServiceSensitivityPersonal], @"personal", [NSNumber numberWithInt:MSGraphServiceSensitivityPrivate], @"private", [NSNumber numberWithInt:MSGraphServiceSensitivityConfidential], @"confidential",
            nil        
        ];
    }
    
    return [stringMappings[string] intValue];

}

+(NSString *) toString: (MSGraphServiceSensitivity) value {

    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         @"normal", [NSNumber numberWithInt:MSGraphServiceSensitivityNormal], @"personal", [NSNumber numberWithInt:MSGraphServiceSensitivityPersonal], @"private", [NSNumber numberWithInt:MSGraphServiceSensitivityPrivate], @"confidential", [NSNumber numberWithInt:MSGraphServiceSensitivityConfidential],
            nil        
        ];
    }
    
    return stringMappings[[NSNumber numberWithInt:value]];
}

@end

