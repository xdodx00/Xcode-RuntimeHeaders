/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface XCMenuBreakpointController : NSObject
{
    NSMapTable *breakpointsMT;
}

- (void)createBreakpointsForIDs:(id)arg1 inProject:(id)arg2;
- (void)disableBreakpointsForProject:(id)arg1;
- (void)enableBreakpointsForProject:(id)arg1;
- (id)breakpointEntryForProject:(id)arg1;
- (long long)enabledStateForProject:(id)arg1;
- (id)shlib;
- (id)types;
- (id)identifiers;
- (id)identifiersDict;
- (void)invalidate:(id)arg1;
- (void)removeProject:(id)arg1;
- (void)dealloc;
- (id)init;

@end
