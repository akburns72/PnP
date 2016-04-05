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


#ifndef MSGRAPHSERVICEDEVICECOLLECTIONFETCHER_H
#define MSGRAPHSERVICEDEVICECOLLECTIONFETCHER_H

@class MSGraphServiceDeviceFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceModels.h"

/** MSGraphServiceDeviceCollectionFetcher
 *
 */
@interface MSGraphServiceDeviceCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphServiceDeviceFetcher *)getById: (id) identifier;
- (void)add:(MSGraphServiceDevice *)entity callback:(void (^)(MSGraphServiceDevice *, MSOrcError *))callback;

- (MSGraphServiceDeviceCollectionFetcher *)select:(NSString *)params;
- (MSGraphServiceDeviceCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServiceDeviceCollectionFetcher *)search:(NSString *)params;
- (MSGraphServiceDeviceCollectionFetcher *)top:(int)value;
- (MSGraphServiceDeviceCollectionFetcher *)skip:(int)value;
- (MSGraphServiceDeviceCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServiceDeviceCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServiceDeviceCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceDeviceCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
