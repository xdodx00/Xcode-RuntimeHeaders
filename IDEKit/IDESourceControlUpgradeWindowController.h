/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSProgressIndicator, NSTextField;

@interface IDESourceControlUpgradeWindowController : NSWindowController
{
    NSTextField *_titleField;
    NSProgressIndicator *_progressIndicator;
    NSMutableArray *_operationInfos;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenDictionary;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
}

@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void).cxx_destruct;
- (void)upgradeWorkingTrees:(id)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayError:(id)arg1;
- (void)upgradeSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetForWindow:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)windowNibName;

@end
