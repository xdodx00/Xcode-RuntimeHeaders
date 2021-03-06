/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMenuDelegate-Protocol.h"

@class DVTWeakInterposer;

@interface _IDEApplicationControllerMenuDelegateForwarder : NSObject <NSMenuDelegate>
{
    DVTWeakInterposer *_menuDelegate_dvtWeakInterposer;
    struct {
        unsigned int _delegateRespondsToNeedsUpdate:1;
        unsigned int _delegateRespondsToWillOpen:1;
        unsigned int _delegateRespondsToDidClose:1;
    } _delegateFlags;
}

- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)description;
- (id)initWithMenuDelegate:(id)arg1;
@property __weak id <NSMenuDelegate> menuDelegate;

@end

