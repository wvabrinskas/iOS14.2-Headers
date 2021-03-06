/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(unsigned long long)assetType;
-(id<CKSharedAssetsControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)updateAttachmentItems:(id)arg1;
-(CGSize*)contentSizeThatFits:(CGSize)arg1;
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(BOOL)isDisplayingAttachmentContent;

@end

