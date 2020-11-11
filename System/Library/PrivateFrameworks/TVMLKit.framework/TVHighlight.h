/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TVTimeRange, NSURL;

@interface TVHighlight : NSObject {

	NSString* _localizedName;
	NSString* _highlightDescription;
	TVTimeRange* _timeRange;
	NSURL* _imageURL;
	TVTimeRange* _dateRange;

}

@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * highlightDescription;              //@synthesize highlightDescription=_highlightDescription - In the implementation block
@property (nonatomic,retain) TVTimeRange * timeRange;                      //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) TVTimeRange * dateRange;                      //@synthesize dateRange=_dateRange - In the implementation block
-(TVTimeRange *)dateRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(void)setTimeRange:(TVTimeRange *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(TVTimeRange *)timeRange;
-(void)setDateRange:(TVTimeRange *)arg1 ;
-(NSString *)localizedName;
-(NSString *)highlightDescription;
-(void)setHighlightDescription:(NSString *)arg1 ;
@end
