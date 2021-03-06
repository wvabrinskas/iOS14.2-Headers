/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;
	BOOL _ignoresReloadDataRequests;
	BOOL _dynamicsDisabled;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (assign,nonatomic) BOOL ignoresReloadDataRequests;                //@synthesize ignoresReloadDataRequests=_ignoresReloadDataRequests - In the implementation block
@property (assign,nonatomic) BOOL dynamicsDisabled;                         //@synthesize dynamicsDisabled=_dynamicsDisabled - In the implementation block
-(unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setIgnoresReloadDataRequests:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)ignoresContentOffsetChanges;
-(void)reloadData;
-(BOOL)ignoresReloadDataRequests;
-(BOOL)dynamicsDisabled;
-(void)setDynamicsDisabled:(BOOL)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

