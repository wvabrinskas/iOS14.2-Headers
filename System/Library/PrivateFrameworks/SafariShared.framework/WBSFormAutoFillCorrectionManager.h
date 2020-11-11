/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSFormAutoFillCorrectionsStore, WBSFormAutoFillCorrectionManagerDelegate;
@class WBSFormAutoFillClassificationToCorrectionsTransformer;

@interface WBSFormAutoFillCorrectionManager : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	id<WBSFormAutoFillCorrectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSFormAutoFillCorrectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_feedbackProcessor;
-(id<WBSFormAutoFillCorrectionManagerDelegate>)delegate;
-(void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCorrectionSet:(id)arg1 ;
-(void)setDelegate:(id<WBSFormAutoFillCorrectionManagerDelegate>)arg1 ;
-(id)initWithCorrectionsStore:(id)arg1 ;
@end
