/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface PFZipLocalFileHeader : NSObject {

	unsigned short _versionNeededToExtract;
	unsigned short _generalPurposeBit;
	unsigned short _compressionMethod;
	unsigned short _lastModTime;
	unsigned short _lastModDate;
	unsigned _crc32;
	unsigned _compressedSize;
	unsigned _uncompressedSize;
	unsigned short _filenameLength;
	unsigned short _extraFieldLength;
	NSString* _filename;
	NSData* _extraFieldData;

}
-(id)init;
-(id)description;
-(void)dealloc;
@end
