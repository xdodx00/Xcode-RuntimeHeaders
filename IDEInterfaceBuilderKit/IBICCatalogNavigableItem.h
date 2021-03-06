/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDENavigableItem.h"

#import "IBICCatalogItemObserver-Protocol.h"

@class NSArray, NSImage, NSString;

@interface IBICCatalogNavigableItem : IDENavigableItem <IBICCatalogItemObserver>
{
    id <IBInvalidation> _itemObservationToken;
    NSImage *_image;
    NSString *_name;
    NSArray *_displayOrderedChildren;
}

- (void).cxx_destruct;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (id)contentDocumentLocation;
- (id)documentType;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (BOOL)isLeaf;
- (id)childRepresentedObjects;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setName:(id)arg1;
- (id)name;
- (id)representedObject;
- (void)imageCatalogItemDidChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeDisplayProperty:(id)arg2;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)imageCatalogItemDiskContentsDidChange:(id)arg1;
- (void)refreshContentIfNeededWithChangeToItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end

