/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSUndoManager.h>

@protocol CUIKCommitDelegate, CUIKDecisionDelegate;
@class NSError;

@interface CUIKUndoManager : NSUndoManager {

	id<CUIKCommitDelegate> _commitDelegate;
	id<CUIKDecisionDelegate> _decisionDelegate;
	/*^block*/id _editingManagerProvider;
	NSError* _lastError;

}

@property (retain) id<CUIKCommitDelegate> commitDelegate;                  //@synthesize commitDelegate=_commitDelegate - In the implementation block
@property (retain) id<CUIKDecisionDelegate> decisionDelegate;              //@synthesize decisionDelegate=_decisionDelegate - In the implementation block
@property (nonatomic,copy) id editingManagerProvider;                      //@synthesize editingManagerProvider=_editingManagerProvider - In the implementation block
@property (retain) NSError * lastError;                                    //@synthesize lastError=_lastError - In the implementation block
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(void)setDecisionDelegate:(id<CUIKDecisionDelegate>)arg1 ;
-(id<CUIKCommitDelegate>)commitDelegate;
-(id<CUIKDecisionDelegate>)decisionDelegate;
-(void)setEditingManagerProvider:(id)arg1 ;
-(void)setCommitDelegate:(id<CUIKCommitDelegate>)arg1 ;
-(id)editingManagerProvider;
@end
