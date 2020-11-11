/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface BLItemImageCollection : NSObject <NSCopying> {

	NSArray* _itemImages;

}

@property (nonatomic,readonly) NSArray * itemImages;              //@synthesize itemImages=_itemImages - In the implementation block
-(id)initWithItemImages:(id)arg1 ;
-(NSArray *)itemImages;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)imagesForSize:(CGSize)arg1 ;
-(id)_newImagesForDictionary:(id)arg1 ;
-(id)_imagesForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)bestImageForSize:(CGSize)arg1 ;
-(id)imagesForKind:(id)arg1 ;
-(id)initWithImageCollection:(id)arg1 ;
@end
