/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class NSOrderedSet;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic,retain) NSOrderedSet * submeshes; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)processSubMesh:(id)arg1 withAssetSubmeshIndex:(unsigned*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4 ;
@end
