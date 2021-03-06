/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {

	PDAnimationInfoData* mEntrance;
	PDAnimationInfoData* mExit;
	PDAnimationInfoData* mMedia;
	PDMediaNode* mediaNode;

}

@property (nonatomic,retain) PDAnimationInfoData * mediaData; 
@property (nonatomic,retain) PDMediaNode * mediaNode; 
-(id)description;
-(PDAnimationInfoData *)mediaData;
-(void)setMediaData:(PDAnimationInfoData *)arg1 ;
-(PDMediaNode *)mediaNode;
-(void)setEntranceData:(id)arg1 ;
-(id)entranceData;
-(void)setExitData:(id)arg1 ;
-(id)exitData;
-(void)setMediaNode:(PDMediaNode *)arg1 ;
@end

