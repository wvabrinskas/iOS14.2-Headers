/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKAVListing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, CLKVideo, NSString, UIImage, UIColor, NSArray;

@interface NTKVideoPlayerListing : NSObject <NTKAVListing, NSCopying> {

	CLKDevice* _device;
	CLKVideo* _video;
	NSString* _filename;
	UIImage* _image;
	UIColor* _color;
	NSArray* _attributes;
	unsigned long long _endBehavior;

}

@property (nonatomic,retain) NSArray * attributes;                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long endBehavior;              //@synthesize endBehavior=_endBehavior - In the implementation block
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listingForDevice:(id)arg1 withFilename:(id)arg2 ;
+(id)listingForDevice:(id)arg1 withFilename:(id)arg2 andColor:(id)arg3 ;
-(CLKVideo *)video;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSString *)debugDescription;
-(void)setColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(NSString *)description;
-(UIColor *)color;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributes;
-(unsigned long long)endBehavior;
-(void)setEndBehavior:(unsigned long long)arg1 ;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(id)initForDevice:(id)arg1 withFilename:(id)arg2 ;
@end

