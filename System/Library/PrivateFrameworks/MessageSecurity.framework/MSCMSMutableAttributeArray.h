/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface MSCMSMutableAttributeArray : NSMutableArray {

	NSMutableArray* _attributes;
	Attribute* _encodedAttributes;
	NSMutableArray* _genericAttributes;

}

@property (retain) NSMutableArray * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (assign) Attribute* encodedAttributes;                    //@synthesize encodedAttributes=_encodedAttributes - In the implementation block
@property (retain) NSMutableArray * genericAttributes;              //@synthesize genericAttributes=_genericAttributes - In the implementation block
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void)addObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeAttributes:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(NSMutableArray *)attributes;
-(void)dealloc;
-(Attribute*)encodeAttributesWithError:(id*)arg1 ;
-(id)calculateAttributesWithDigest:(id)arg1 error:(id*)arg2 ;
-(id)getAttributesWithType:(id)arg1 ;
-(Attribute*)encodedAttributes;
-(void)setEncodedAttributes:(Attribute*)arg1 ;
-(NSMutableArray *)genericAttributes;
-(void)setGenericAttributes:(NSMutableArray *)arg1 ;
@end
