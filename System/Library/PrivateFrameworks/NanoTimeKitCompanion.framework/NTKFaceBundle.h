/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NTKFaceBundle : NSObject

@property (nonatomic,readonly) Class faceClass; 
@property (nonatomic,readonly) Class faceViewClass; 
@property (nonatomic,readonly) NSString * galleryDescriptionText; 
@property (nonatomic,readonly) NSString * galleryTitle; 
+(id)identifier;
+(id)imageWithName:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 table:(id)arg2 comment:(id)arg3 ;
+(id)logCategoryName;
+(id)localizedStringForKey:(id)arg1 comment:(id)arg2 ;
+(id)logObject;
-(Class)faceClass;
-(Class)faceViewClass;
-(id)defaultFaceForDevice:(id)arg1 ;
-(id)galleryFacesForDevice:(id)arg1 ;
-(NSString *)galleryTitle;
-(NSString *)galleryDescriptionText;
-(id)heroFacesForDevice:(id)arg1 ;
-(BOOL)isHardwareSpecific;
@end
