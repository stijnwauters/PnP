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



#ifndef MSGRAPHSERVICESUBSCRIBEDSKUFETCHER_H
#define MSGRAPHSERVICESUBSCRIBEDSKUFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceLicenseUnitsDetailFetcher;
@class MSGraphServiceServicePlanInfoCollectionFetcher;
@class MSGraphServiceSubscribedSkuOperations;


/** MSGraphServiceSubscribedSkuFetcher
 *
 */
@interface MSGraphServiceSubscribedSkuFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceSubscribedSkuOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceSubscribedSku *, MSOrcError *))callback;
- (void)update:(MSGraphServiceSubscribedSku *)subscribedSku callback:(void (^)(MSGraphServiceSubscribedSku *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceSubscribedSkuFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceSubscribedSkuFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceSubscribedSkuFetcher *)select:(NSString *)params;
- (MSGraphServiceSubscribedSkuFetcher *)expand:(NSString *)value;

@end

#endif
