/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class TDTextureRenditionSpec, TDTextureImageRenditionSpec, TDTextureFace;

@interface TDTextureMipLevel : NSManagedObject

@property (assign,nonatomic) short level; 
@property (nonatomic,retain) TDTextureRenditionSpec * texture; 
@property (nonatomic,retain) TDTextureImageRenditionSpec * textureImage; 
@property (nonatomic,retain) TDTextureFace * face; 
@end

