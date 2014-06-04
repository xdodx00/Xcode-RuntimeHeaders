/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCSServiceManager.h"

#import "IDEContinuousIntegrationServiceManager-Protocol.h"

@class NSArray, NSString;

@interface XCSUIServiceManager : XCSServiceManager <IDEContinuousIntegrationServiceManager>
{
    NSArray *services;
    NSString *_localCachePath;
}

+ (id)sharedServiceManager;
@property(readonly, copy, nonatomic) NSString *localCachePath; // @synthesize localCachePath=_localCachePath;
@property(copy, nonatomic) NSArray *services; // @synthesize services;
- (void).cxx_destruct;
- (void)writeServicesToLocalCacheWithCompletionBlock:(id)arg1;
- (void)readServicesFromLocalCacheWithCompletionBlock:(id)arg1;
- (void)removeAllServicesWithCompletionBlock:(id)arg1;
- (id)_localCachePath:(id *)arg1;
- (id)serviceMatchingClientUUID:(id)arg1;
- (void)removeService:(id)arg1 withCompletionBlock:(id)arg2;
- (void)addService:(id)arg1 withCompletionBlock:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
