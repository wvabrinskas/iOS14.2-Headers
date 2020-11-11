/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ChatKit/ChatKit-Structs.h>
@class CKBalloonView, NSDictionary;

@interface CKThrowBalloonViewAttributes : NSObject {

	CKBalloonView* _throwBalloonView;
	NSDictionary* _supplementaryViews;
	CGRect _startFrame;

}

@property (nonatomic,retain) CKBalloonView * throwBalloonView;               //@synthesize throwBalloonView=_throwBalloonView - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryViews;              //@synthesize supplementaryViews=_supplementaryViews - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                              //@synthesize startFrame=_startFrame - In the implementation block
-(void)setSupplementaryViews:(NSDictionary *)arg1 ;
-(void)setThrowBalloonView:(CKBalloonView *)arg1 ;
-(CKBalloonView *)throwBalloonView;
-(NSDictionary *)supplementaryViews;
-(CGRect)startFrame;
-(void)setStartFrame:(CGRect)arg1 ;
@end
