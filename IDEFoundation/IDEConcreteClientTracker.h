/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEClientTracking-Protocol.h"

@class NSMutableSet;

@interface IDEConcreteClientTracker : NSObject <IDEClientTracking>
{
    NSMutableSet *_clientTrackingTokensRequiringCancellation;
    NSMutableSet *_clientTrackingTokensRequiringCancellationPrompt;
    NSMutableSet *_clientTrackingTokensNotSupportingCancellation;
    BOOL _isCancelling;
}

- (void).cxx_destruct;
- (void)_clientCancellationTimeout;
- (void)cancelTrackedClients;
- (void)unregisterClient:(id)arg1;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(id)arg3;

@end

