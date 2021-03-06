/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPathControl.h"

@class NSArray;

// Not exported
@interface GPUPathControl : NSPathControl
{
    NSArray *_representedItems;
}

+ (Class)cellClass;
+ (unsigned long long)defaultFocusRingType;
@property(retain, nonatomic) NSArray *representedItems; // @synthesize representedItems=_representedItems;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
@property int borderSides;
- (BOOL)isOpaque;
@property(nonatomic) int gradientStyle;
- (void)popUpMenuForComponentCell:(id)arg1;
- (void)_popUpMenuForComponentCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

