/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NTKVideoPlayerListing;

@interface NTKVideoPlayerDataSource : NSObject {

	UIImage* _posterImage;
	NTKVideoPlayerListing* _currentListing;

}

@property (nonatomic,retain) NTKVideoPlayerListing * currentListing;              //@synthesize currentListing=_currentListing - In the implementation block
@property (nonatomic,retain) UIImage * posterImage;                               //@synthesize posterImage=_posterImage - In the implementation block
-(id)init;
-(UIImage *)posterImage;
-(void)setPosterImage:(UIImage *)arg1 ;
-(NTKVideoPlayerListing *)currentListing;
-(void)setCurrentListing:(NTKVideoPlayerListing *)arg1 ;
-(void)advanceToNextListing:(unsigned long long)arg1 ;
-(id)listingsToQueueAfterCurrent;
-(id)listingToQueueOncePlaybackStarts;
@end
