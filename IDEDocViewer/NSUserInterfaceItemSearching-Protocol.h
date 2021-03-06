/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NSUserInterfaceItemSearching <NSObject>
- (id)localizedTitlesForItem:(id)arg1;
- (void)searchForItemsWithSearchString:(id)arg1 resultLimit:(long long)arg2 matchedItemHandler:(id)arg3;

@optional
- (void)showAllHelpTopicsForSearchString:(id)arg1;
- (void)performActionForItem:(id)arg1;
@end

